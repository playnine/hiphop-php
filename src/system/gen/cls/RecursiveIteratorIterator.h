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

#ifndef __GENERATED_cls$$RecursiveIteratorIterator$_h__
#define __GENERATED_cls$$RecursiveIteratorIterator$_h__

#include <cls/RecursiveIteratorIterator.fw.h>
#include <cls/OuterIterator.h>
#include <cls/Traversable.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 164 */
FORWARD_DECLARE_CLASS(RecursiveIteratorIterator);
class c_RecursiveIteratorIterator : public ExtObjectData {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(RecursiveIteratorIterator, RecursiveIteratorIterator)
  DECLARE_INVOKE_EX(RecursiveIteratorIterator, RecursiveIteratorIterator, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_RecursiveIteratorIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_RecursiveIteratorIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_RecursiveIteratorIterator 1
  static Variant os_constant(const char *s);

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_RecursiveIteratorIterator 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_RecursiveIteratorIterator 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_RecursiveIteratorIterator 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_RecursiveIteratorIterator 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_RecursiveIteratorIterator 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_RecursiveIteratorIterator 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: void t___construct(Variant v_iterator, Variant v_mode = 0LL /* RecursiveIteratorIterator::LEAVES_ONLY */, Variant v_flags = 0LL);
  public: c_RecursiveIteratorIterator *create(Variant v_iterator, Variant v_mode = 0LL /* RecursiveIteratorIterator::LEAVES_ONLY */, Variant v_flags = 0LL);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Object t_getinneriterator();
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: void t_rewind();
  public: bool t_valid();
  public: Variant m_rsrc;
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(getinneriterator);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
extern const int64 q_RecursiveIteratorIterator_LEAVES_ONLY;
extern const int64 q_RecursiveIteratorIterator_SELF_FIRST;
extern const int64 q_RecursiveIteratorIterator_CHILD_FIRST;
extern const int64 q_RecursiveIteratorIterator_CATCH_GET_CHILD;
extern struct ObjectStaticCallbacks cw_RecursiveIteratorIterator;
Object co_RecursiveIteratorIterator(CArrRef params, bool init = true);
Object coo_RecursiveIteratorIterator();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls$$RecursiveIteratorIterator$_h__
