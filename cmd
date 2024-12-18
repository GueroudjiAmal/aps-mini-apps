. ~/spack/share/spack/setup-env.sh && spack env activate mof

bedrock na+sm -c ./build/config.json

python ./build/python/streamer-daq/DAQStream.py --mode 1 --simulation_file \
      ./data/tomo_00058_all_subsampled1p_s1079s1081.h5 --d_iteration 1 \
      --publisher_addr tcp://0.0.0.0:50000 --iteration_sleep 1 --synch_addr tcp://0.0.0.0:50001 \
      --synch_count 1 --protocol na+sm --group_file ./build/mofka.json

python ./build/python/streamer-dist/ModDistStreamPubDemo.py  --cast_to_float32 \
      --normalize --beg_sinogram 1000 --num_sinograms 2 --num_columns 2560 \
      --protocol na+sm --group_file ./build/mofka.json

./bin/sirt_stream --write-freq 4  --window-iter 1 --window-step 4 --window-length 4 \
      -t 2 -c 1427 --protocol na+sm --group-file ./build/mofka.json

python ./build/python/streamer_denoiser/denoiser.py --model ./build/python/streamer-denoiser/testA40GPU-it07500.h5 \
      --protocol na+sm --group_file ./build/mofka.json
