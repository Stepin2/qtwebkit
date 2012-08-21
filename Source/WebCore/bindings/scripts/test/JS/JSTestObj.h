/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSTestObj_h
#define JSTestObj_h

#include "JSDOMBinding.h"
#include "TestObj.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSTestObj : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSTestObj* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TestObj> impl)
    {
        JSTestObj* ptr = new (NotNull, JSC::allocateCell<JSTestObj>(globalObject->globalData().heap)) JSTestObj(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSTestObj();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    JSC::WriteBarrier<JSC::Unknown> m_cachedAttribute1;
    JSC::WriteBarrier<JSC::Unknown> m_cachedAttribute2;
    static void visitChildren(JSCell*, JSC::SlotVisitor&);


    // Custom attributes
    JSC::JSValue customAttr(JSC::ExecState*) const;
    void setCustomAttr(JSC::ExecState*, JSC::JSValue);

    // Custom functions
    JSC::JSValue customMethod(JSC::ExecState*);
    JSC::JSValue customMethodWithArgs(JSC::ExecState*);
    static JSC::JSValue classMethod2(JSC::ExecState*);
    TestObj* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    TestObj* m_impl;
protected:
    JSTestObj(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<TestObj>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSTestObjOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, TestObj*)
{
    DEFINE_STATIC_LOCAL(JSTestObjOwner, jsTestObjOwner, ());
    return &jsTestObjOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, TestObj*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestObj*);
TestObj* toTestObj(JSC::JSValue);

class JSTestObjPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSTestObjPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestObjPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestObjPrototype>(globalData.heap)) JSTestObjPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSTestObjPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSTestObjConstructor : public DOMConstructorObject {
private:
    JSTestObjConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSTestObjConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSTestObjConstructor* ptr = new (NotNull, JSC::allocateCell<JSTestObjConstructor>(*exec->heap())) JSTestObjConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSTestObj(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionVoidMethod(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionVoidMethodWithArgs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethod(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithArgs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionObjMethod(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionObjMethodWithArgs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithSequenceArg(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodReturningSequence(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodThatRequiresAllArgsAndThrows(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionSerializedValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionIdbKey(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionOptionsObject(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithException(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionCustomMethod(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionCustomMethodWithArgs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptStateVoid(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptStateObj(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptStateVoidException(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptStateObjException(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptExecutionContext(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptExecutionContextAndScriptState(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptExecutionContextAndScriptStateObjException(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptExecutionContextAndScriptStateWithSpaces(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionWithScriptArgumentsAndCallStack(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithOptionalArg(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithNonOptionalArgAndOptionalArg(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithNonOptionalArgAndTwoOptionalArgs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithOptionalString(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithOptionalStringIsUndefined(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithOptionalStringIsNullString(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithCallbackArg(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithNonCallbackArgAndCallbackArg(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithCallbackAndOptionalArg(JSC::ExecState*);
#if ENABLE(Condition1)
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionConditionalMethod1(JSC::ExecState*);
#endif
#if ENABLE(Condition1) && ENABLE(Condition2)
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionConditionalMethod2(JSC::ExecState*);
#endif
#if ENABLE(Condition1) || ENABLE(Condition2)
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionConditionalMethod3(JSC::ExecState*);
#endif
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionOverloadedMethod(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjConstructorFunctionClassMethod(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjConstructorFunctionClassMethodWithOptional(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjConstructorFunctionClassMethod2(JSC::ExecState*);
#if ENABLE(Condition1)
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjConstructorFunctionOverloadedMethod1(JSC::ExecState*);
#endif
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionClassMethodWithClamp(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMethodWithUnsignedLongSequence(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionStringArrayFunction(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionGetSVGDocument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionConvert1(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionConvert2(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionConvert4(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionConvert5(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionMutablePointFunction(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionImmutablePointFunction(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionOrange(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestObjPrototypeFunctionStrictFunction(JSC::ExecState*);
// Attributes

JSC::JSValue jsTestObjReadOnlyLongAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjReadOnlyStringAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjReadOnlyTestObjAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjConstructorStaticReadOnlyLongAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjConstructorStaticStringAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjConstructorStaticStringAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjConstructorTestSubObj(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjShortAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjShortAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjUnsignedShortAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjUnsignedShortAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjLongLongAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjLongLongAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjUnsignedLongLongAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjUnsignedLongLongAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjStringAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjStringAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjTestObjAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjTestObjAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjXMLObjAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjXMLObjAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjCreate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjCreate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedStringAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedStringAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedIntegralAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedIntegralAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedUnsignedIntegralAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedUnsignedIntegralAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedBooleanAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedBooleanAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedURLAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedURLAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedStringAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedStringAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedCustomIntegralAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedCustomIntegralAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedCustomBooleanAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedCustomBooleanAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjReflectedCustomURLAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReflectedCustomURLAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjTypedArrayAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjTypedArrayAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjAttrWithGetterException(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjAttrWithGetterException(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjAttrWithSetterException(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjAttrWithSetterException(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjStringAttrWithGetterException(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjStringAttrWithGetterException(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjStringAttrWithSetterException(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjStringAttrWithSetterException(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjCustomAttr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjCustomAttr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjWithScriptStateAttribute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjWithScriptStateAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjWithScriptExecutionContextAttribute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjWithScriptExecutionContextAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjWithScriptStateAttributeRaises(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjWithScriptStateAttributeRaises(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjWithScriptExecutionContextAttributeRaises(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjWithScriptExecutionContextAttributeRaises(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjWithScriptExecutionContextAndScriptStateAttribute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjWithScriptExecutionContextAndScriptStateAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjWithScriptExecutionContextAndScriptStateAttributeRaises(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjWithScriptExecutionContextAndScriptStateAttributeRaises(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjWithScriptExecutionContextAndScriptStateWithSpacesAttribute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjWithScriptExecutionContextAndScriptStateWithSpacesAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjWithScriptArgumentsAndCallStackAttribute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjWithScriptArgumentsAndCallStackAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(Condition1)
JSC::JSValue jsTestObjConditionalAttr1(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjConditionalAttr1(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(Condition1) && ENABLE(Condition2)
JSC::JSValue jsTestObjConditionalAttr2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjConditionalAttr2(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(Condition1) || ENABLE(Condition2)
JSC::JSValue jsTestObjConditionalAttr3(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjConditionalAttr3(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(Condition1)
JSC::JSValue jsTestObjConditionalAttr4Constructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjConditionalAttr4Constructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(Condition1) && ENABLE(Condition2)
JSC::JSValue jsTestObjConditionalAttr5Constructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjConditionalAttr5Constructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(Condition1) || ENABLE(Condition2)
JSC::JSValue jsTestObjConditionalAttr6Constructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjConditionalAttr6Constructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsTestObjCachedAttribute1(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCachedAttribute2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjContentDocument(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjMutablePoint(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjMutablePoint(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjImmutablePoint(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjImmutablePoint(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjStrawberry(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjStrawberry(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjStrictFloat(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjStrictFloat(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjDescription(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjId(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjId(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjHash(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjReplaceableAttribute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTestObjReplaceableAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestObjConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

#if ENABLE(Condition1)
JSC::JSValue jsTestObjCONDITIONAL_CONST(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
JSC::JSValue jsTestObjCONST_VALUE_0(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_1(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_4(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_8(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_9(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_10(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_11(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_12(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_13(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_VALUE_14(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTestObjCONST_JAVASCRIPT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
