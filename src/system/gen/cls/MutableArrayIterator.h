/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls$$MutableArrayIterator$_h__
#define __GENERATED_cls$$MutableArrayIterator$_h__

#include <cls/MutableArrayIterator.fw.h>
#include <cls/ArrayIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 638 */
FORWARD_DECLARE_CLASS(MutableArrayIterator);
class c_MutableArrayIterator : public c_ArrayIterator {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(MutableArrayIterator, MutableArrayIterator)
  DECLARE_INVOKE_EX(MutableArrayIterator, MutableArrayIterator, ArrayIterator)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_MutableArrayIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_MutableArrayIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_MutableArrayIterator 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_MutableArrayIterator 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_MutableArrayIterator 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_MutableArrayIterator 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_MutableArrayIterator 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_MutableArrayIterator 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_MutableArrayIterator 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_MutableArrayIterator 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: void t___construct(Variant v_array, Variant v_flags = 0LL);
  public: c_MutableArrayIterator *create(Variant v_array, Variant v_flags = 0LL);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_currentref();
  DECLARE_METHOD_INVOKE_HELPERS(currentref);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
};
extern struct ObjectStaticCallbacks cw_MutableArrayIterator;
Object co_MutableArrayIterator(CArrRef params, bool init = true);
Object coo_MutableArrayIterator();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls$$MutableArrayIterator$_h__
