// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: mediapipe/framework/formats/image_format.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Mediapipe {

  /// <summary>Holder for reflection information generated from mediapipe/framework/formats/image_format.proto</summary>
  public static partial class ImageFormatReflection {

    #region Descriptor
    /// <summary>File descriptor for mediapipe/framework/formats/image_format.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ImageFormatReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Ci5tZWRpYXBpcGUvZnJhbWV3b3JrL2Zvcm1hdHMvaW1hZ2VfZm9ybWF0LnBy",
            "b3RvEgltZWRpYXBpcGUiuQEKC0ltYWdlRm9ybWF0IqkBCgZGb3JtYXQSCwoH",
            "VU5LTk9XThAAEggKBFNSR0IQARIJCgVTUkdCQRACEgkKBUdSQVk4EAMSCgoG",
            "R1JBWTE2EAQSDQoJWUNCQ1I0MjBQEAUSDwoLWUNCQ1I0MjBQMTAQBhIKCgZT",
            "UkdCNDgQBxILCgdTUkdCQTY0EAgSCwoHVkVDMzJGMRAJEgsKB1ZFQzMyRjIQ",
            "DBIICgRMQUI4EAoSCQoFU0JHUkEQCw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Mediapipe.ImageFormat), global::Mediapipe.ImageFormat.Parser, null, null, new[]{ typeof(global::Mediapipe.ImageFormat.Types.Format) }, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class ImageFormat : pb::IMessage<ImageFormat>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<ImageFormat> _parser = new pb::MessageParser<ImageFormat>(() => new ImageFormat());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<ImageFormat> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Mediapipe.ImageFormatReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ImageFormat() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ImageFormat(ImageFormat other) : this() {
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ImageFormat Clone() {
      return new ImageFormat(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as ImageFormat);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(ImageFormat other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(ImageFormat other) {
      if (other == null) {
        return;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
        }
      }
    }
    #endif

    #region Nested types
    /// <summary>Container for nested types declared in the ImageFormat message type.</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static partial class Types {
      public enum Format {
        /// <summary>
        /// The format is unknown.  It is not valid for an ImageFrame to be
        /// initialized with this value.
        /// </summary>
        [pbr::OriginalName("UNKNOWN")] Unknown = 0,
        /// <summary>
        /// sRGB, interleaved: one byte for R, then one byte for G, then one
        /// byte for B for each pixel.
        /// </summary>
        [pbr::OriginalName("SRGB")] Srgb = 1,
        /// <summary>
        /// sRGBA, interleaved: one byte for R, one byte for G, one byte for B,
        /// one byte for alpha or unused.
        /// </summary>
        [pbr::OriginalName("SRGBA")] Srgba = 2,
        /// <summary>
        /// Grayscale, one byte per pixel.
        /// </summary>
        [pbr::OriginalName("GRAY8")] Gray8 = 3,
        /// <summary>
        /// Grayscale, one uint16 per pixel.
        /// </summary>
        [pbr::OriginalName("GRAY16")] Gray16 = 4,
        /// <summary>
        /// YCbCr420P (1 bpp for Y, 0.25 bpp for U and V).
        /// NOTE: NOT a valid ImageFrame format, but intended for
        /// ScaleImageCalculatorOptions, VideoHeader, etc. to indicate that
        /// YUVImage is used in place of ImageFrame.
        /// </summary>
        [pbr::OriginalName("YCBCR420P")] Ycbcr420P = 5,
        /// <summary>
        /// Similar to YCbCr420P, but the data is represented as the lower 10bits of
        /// a uint16. Like YCbCr420P, this is NOT a valid ImageFrame, and the data is
        /// carried within a YUVImage.
        /// </summary>
        [pbr::OriginalName("YCBCR420P10")] Ycbcr420P10 = 6,
        /// <summary>
        /// sRGB, interleaved, each component is a uint16.
        /// </summary>
        [pbr::OriginalName("SRGB48")] Srgb48 = 7,
        /// <summary>
        /// sRGBA, interleaved, each component is a uint16.
        /// </summary>
        [pbr::OriginalName("SRGBA64")] Srgba64 = 8,
        /// <summary>
        /// One float per pixel.
        /// </summary>
        [pbr::OriginalName("VEC32F1")] Vec32F1 = 9,
        /// <summary>
        /// Two floats per pixel.
        /// </summary>
        [pbr::OriginalName("VEC32F2")] Vec32F2 = 12,
        /// <summary>
        /// LAB, interleaved: one byte for L, then one byte for a, then one
        /// byte for b for each pixel.
        /// </summary>
        [pbr::OriginalName("LAB8")] Lab8 = 10,
        /// <summary>
        /// sBGRA, interleaved: one byte for B, one byte for G, one byte for R,
        /// one byte for alpha or unused. This is the N32 format for Skia.
        /// </summary>
        [pbr::OriginalName("SBGRA")] Sbgra = 11,
      }

    }
    #endregion

  }

  #endregion

}

#endregion Designer generated code
