
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_TreeMap$SubMap$KeySet__
#define __java_util_TreeMap$SubMap$KeySet__

#pragma interface

#include <java/util/AbstractSet.h>

class java::util::TreeMap$SubMap$KeySet : public ::java::util::AbstractSet
{

  TreeMap$SubMap$KeySet(::java::util::TreeMap$SubMap *);
public:
  virtual jint size();
  virtual ::java::util::Iterator * iterator();
  virtual void clear();
  virtual jboolean contains(::java::lang::Object *);
  virtual jboolean remove(::java::lang::Object *);
public: // actually package-private
  TreeMap$SubMap$KeySet(::java::util::TreeMap$SubMap *, ::java::util::TreeMap$SubMap$KeySet *);
  TreeMap$SubMap$KeySet(::java::util::TreeMap$SubMap *, ::java::util::TreeMap$SubMap$KeySet *, ::java::util::TreeMap$SubMap$KeySet *);
  ::java::util::TreeMap$SubMap * __attribute__((aligned(__alignof__( ::java::util::AbstractSet)))) this$1;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_TreeMap$SubMap$KeySet__
