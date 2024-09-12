// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TRACEPROT_MONA_TRACEDS_H_
#define FLATBUFFERS_GENERATED_TRACEPROT_MONA_TRACEDS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

namespace MONA {
namespace TraceDS {

struct Dim2;

struct Dim3;

struct TImage;
struct TImageBuilder;

enum IType : int8_t {
  IType_End = 0,
  IType_Projection = 1,
  IType_White = 2,
  IType_Dark = 3,
  IType_WhiteReset = 4,
  IType_DarkReset = 5,
  IType_MIN = IType_End,
  IType_MAX = IType_DarkReset
};

inline const IType (&EnumValuesIType())[6] {
  static const IType values[] = {
    IType_End,
    IType_Projection,
    IType_White,
    IType_Dark,
    IType_WhiteReset,
    IType_DarkReset
  };
  return values;
}

inline const char * const *EnumNamesIType() {
  static const char * const names[7] = {
    "End",
    "Projection",
    "White",
    "Dark",
    "WhiteReset",
    "DarkReset",
    nullptr
  };
  return names;
}

inline const char *EnumNameIType(IType e) {
  if (::flatbuffers::IsOutRange(e, IType_End, IType_DarkReset)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesIType()[index];
}

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Dim2 FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t y_;
  int32_t x_;

 public:
  Dim2()
      : y_(0),
        x_(0) {
  }
  Dim2(int32_t _y, int32_t _x)
      : y_(::flatbuffers::EndianScalar(_y)),
        x_(::flatbuffers::EndianScalar(_x)) {
  }
  int32_t y() const {
    return ::flatbuffers::EndianScalar(y_);
  }
  int32_t x() const {
    return ::flatbuffers::EndianScalar(x_);
  }
};
FLATBUFFERS_STRUCT_END(Dim2, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Dim3 FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t z_;
  int32_t y_;
  int32_t x_;

 public:
  Dim3()
      : z_(0),
        y_(0),
        x_(0) {
  }
  Dim3(int32_t _z, int32_t _y, int32_t _x)
      : z_(::flatbuffers::EndianScalar(_z)),
        y_(::flatbuffers::EndianScalar(_y)),
        x_(::flatbuffers::EndianScalar(_x)) {
  }
  int32_t z() const {
    return ::flatbuffers::EndianScalar(z_);
  }
  int32_t y() const {
    return ::flatbuffers::EndianScalar(y_);
  }
  int32_t x() const {
    return ::flatbuffers::EndianScalar(x_);
  }
};
FLATBUFFERS_STRUCT_END(Dim3, 12);

struct TImage FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TImageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SEQ = 4,
    VT_DIMS = 6,
    VT_ROTATION = 8,
    VT_CENTER = 10,
    VT_UNIQUEID = 12,
    VT_ITYPE = 14,
    VT_TDATA = 16
  };
  int32_t seq() const {
    return GetField<int32_t>(VT_SEQ, 0);
  }
  const MONA::TraceDS::Dim3 *dims() const {
    return GetStruct<const MONA::TraceDS::Dim3 *>(VT_DIMS);
  }
  float rotation() const {
    return GetField<float>(VT_ROTATION, 0.0f);
  }
  float center() const {
    return GetField<float>(VT_CENTER, 0.0f);
  }
  int32_t uniqueId() const {
    return GetField<int32_t>(VT_UNIQUEID, 0);
  }
  MONA::TraceDS::IType itype() const {
    return static_cast<MONA::TraceDS::IType>(GetField<int8_t>(VT_ITYPE, 0));
  }
  const ::flatbuffers::Vector<uint8_t> *tdata() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_TDATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_SEQ, 4) &&
           VerifyField<MONA::TraceDS::Dim3>(verifier, VT_DIMS, 4) &&
           VerifyField<float>(verifier, VT_ROTATION, 4) &&
           VerifyField<float>(verifier, VT_CENTER, 4) &&
           VerifyField<int32_t>(verifier, VT_UNIQUEID, 4) &&
           VerifyField<int8_t>(verifier, VT_ITYPE, 1) &&
           VerifyOffset(verifier, VT_TDATA) &&
           verifier.VerifyVector(tdata()) &&
           verifier.EndTable();
  }
};

struct TImageBuilder {
  typedef TImage Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_seq(int32_t seq) {
    fbb_.AddElement<int32_t>(TImage::VT_SEQ, seq, 0);
  }
  void add_dims(const MONA::TraceDS::Dim3 *dims) {
    fbb_.AddStruct(TImage::VT_DIMS, dims);
  }
  void add_rotation(float rotation) {
    fbb_.AddElement<float>(TImage::VT_ROTATION, rotation, 0.0f);
  }
  void add_center(float center) {
    fbb_.AddElement<float>(TImage::VT_CENTER, center, 0.0f);
  }
  void add_uniqueId(int32_t uniqueId) {
    fbb_.AddElement<int32_t>(TImage::VT_UNIQUEID, uniqueId, 0);
  }
  void add_itype(MONA::TraceDS::IType itype) {
    fbb_.AddElement<int8_t>(TImage::VT_ITYPE, static_cast<int8_t>(itype), 0);
  }
  void add_tdata(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> tdata) {
    fbb_.AddOffset(TImage::VT_TDATA, tdata);
  }
  explicit TImageBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TImage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TImage>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TImage> CreateTImage(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int32_t seq = 0,
    const MONA::TraceDS::Dim3 *dims = nullptr,
    float rotation = 0.0f,
    float center = 0.0f,
    int32_t uniqueId = 0,
    MONA::TraceDS::IType itype = MONA::TraceDS::IType_End,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> tdata = 0) {
  TImageBuilder builder_(_fbb);
  builder_.add_tdata(tdata);
  builder_.add_uniqueId(uniqueId);
  builder_.add_center(center);
  builder_.add_rotation(rotation);
  builder_.add_dims(dims);
  builder_.add_seq(seq);
  builder_.add_itype(itype);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TImage> CreateTImageDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int32_t seq = 0,
    const MONA::TraceDS::Dim3 *dims = nullptr,
    float rotation = 0.0f,
    float center = 0.0f,
    int32_t uniqueId = 0,
    MONA::TraceDS::IType itype = MONA::TraceDS::IType_End,
    const std::vector<uint8_t> *tdata = nullptr) {
  auto tdata__ = tdata ? _fbb.CreateVector<uint8_t>(*tdata) : 0;
  return MONA::TraceDS::CreateTImage(
      _fbb,
      seq,
      dims,
      rotation,
      center,
      uniqueId,
      itype,
      tdata__);
}

inline const MONA::TraceDS::TImage *GetTImage(const void *buf) {
  return ::flatbuffers::GetRoot<MONA::TraceDS::TImage>(buf);
}

inline const MONA::TraceDS::TImage *GetSizePrefixedTImage(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<MONA::TraceDS::TImage>(buf);
}

inline bool VerifyTImageBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<MONA::TraceDS::TImage>(nullptr);
}

inline bool VerifySizePrefixedTImageBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<MONA::TraceDS::TImage>(nullptr);
}

inline void FinishTImageBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MONA::TraceDS::TImage> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTImageBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MONA::TraceDS::TImage> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace TraceDS
}  // namespace MONA

#endif  // FLATBUFFERS_GENERATED_TRACEPROT_MONA_TRACEDS_H_
