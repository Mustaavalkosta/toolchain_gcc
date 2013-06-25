
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_stream_ImageOutputStreamImpl__
#define __javax_imageio_stream_ImageOutputStreamImpl__

#pragma interface

#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace stream
      {
          class ImageOutputStreamImpl;
      }
    }
  }
}

class javax::imageio::stream::ImageOutputStreamImpl : public ::javax::imageio::stream::ImageInputStreamImpl
{

public:
  ImageOutputStreamImpl();
public: // actually protected
  virtual void flushBits();
public:
  virtual void write(JArray< jbyte > *);
  virtual void write(JArray< jbyte > *, jint, jint) = 0;
  virtual void write(jint) = 0;
  virtual void writeBit(jint);
  virtual void writeBits(jlong, jint);
  virtual void writeBoolean(jboolean);
  virtual void writeByte(jint);
  virtual void writeBytes(::java::lang::String *);
  virtual void writeChar(jint);
  virtual void writeChars(JArray< jchar > *, jint, jint);
  virtual void writeChars(::java::lang::String *);
  virtual void writeDouble(jdouble);
  virtual void writeDoubles(JArray< jdouble > *, jint, jint);
  virtual void writeFloat(jfloat);
  virtual void writeFloats(JArray< jfloat > *, jint, jint);
  virtual void writeInt(jint);
  virtual void writeInts(JArray< jint > *, jint, jint);
  virtual void writeLong(jlong);
  virtual void writeLongs(JArray< jlong > *, jint, jint);
  virtual void writeShort(jint);
  virtual void writeShorts(JArray< jshort > *, jint, jint);
  virtual void writeUTF(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_stream_ImageOutputStreamImpl__
