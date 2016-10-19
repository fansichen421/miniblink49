// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8XMLHttpRequestEventTarget.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8XMLHttpRequestEventTarget::wrapperTypeInfo = { gin::kEmbedderBlink, V8XMLHttpRequestEventTarget::domTemplate, V8XMLHttpRequestEventTarget::refObject, V8XMLHttpRequestEventTarget::derefObject, V8XMLHttpRequestEventTarget::trace, 0, 0, V8XMLHttpRequestEventTarget::preparePrototypeObject, V8XMLHttpRequestEventTarget::installConditionallyEnabledProperties, "XMLHttpRequestEventTarget", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XMLHttpRequestEventTarget.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& XMLHttpRequestEventTarget::s_wrapperTypeInfo = V8XMLHttpRequestEventTarget::wrapperTypeInfo;

namespace XMLHttpRequestEventTargetV8Internal {

static void onloadstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    EventListener* cppValue(impl->onloadstart());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onloadstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XMLHttpRequestEventTargetV8Internal::onloadstartAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onloadstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onloadstart(), v8Value, V8XMLHttpRequestEventTarget::eventListenerCacheIndex);
    impl->setOnloadstart(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onloadstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    XMLHttpRequestEventTargetV8Internal::onloadstartAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onprogressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    EventListener* cppValue(impl->onprogress());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onprogressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XMLHttpRequestEventTargetV8Internal::onprogressAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onprogressAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onprogress(), v8Value, V8XMLHttpRequestEventTarget::eventListenerCacheIndex);
    impl->setOnprogress(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onprogressAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    XMLHttpRequestEventTargetV8Internal::onprogressAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    EventListener* cppValue(impl->onabort());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XMLHttpRequestEventTargetV8Internal::onabortAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onabortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onabort(), v8Value, V8XMLHttpRequestEventTarget::eventListenerCacheIndex);
    impl->setOnabort(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onabortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    XMLHttpRequestEventTargetV8Internal::onabortAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    EventListener* cppValue(impl->onerror());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XMLHttpRequestEventTargetV8Internal::onerrorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onerror(), v8Value, V8XMLHttpRequestEventTarget::eventListenerCacheIndex);
    impl->setOnerror(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    XMLHttpRequestEventTargetV8Internal::onerrorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    EventListener* cppValue(impl->onload());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XMLHttpRequestEventTargetV8Internal::onloadAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onloadAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onload(), v8Value, V8XMLHttpRequestEventTarget::eventListenerCacheIndex);
    impl->setOnload(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onloadAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    XMLHttpRequestEventTargetV8Internal::onloadAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void ontimeoutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    EventListener* cppValue(impl->ontimeout());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void ontimeoutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XMLHttpRequestEventTargetV8Internal::ontimeoutAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void ontimeoutAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->ontimeout(), v8Value, V8XMLHttpRequestEventTarget::eventListenerCacheIndex);
    impl->setOntimeout(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void ontimeoutAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    XMLHttpRequestEventTargetV8Internal::ontimeoutAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onloadendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    EventListener* cppValue(impl->onloadend());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onloadendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XMLHttpRequestEventTargetV8Internal::onloadendAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onloadendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onloadend(), v8Value, V8XMLHttpRequestEventTarget::eventListenerCacheIndex);
    impl->setOnloadend(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onloadendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    XMLHttpRequestEventTargetV8Internal::onloadendAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace XMLHttpRequestEventTargetV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8XMLHttpRequestEventTargetAccessors[] = {
    {"onloadstart", XMLHttpRequestEventTargetV8Internal::onloadstartAttributeGetterCallback, XMLHttpRequestEventTargetV8Internal::onloadstartAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onprogress", XMLHttpRequestEventTargetV8Internal::onprogressAttributeGetterCallback, XMLHttpRequestEventTargetV8Internal::onprogressAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onabort", XMLHttpRequestEventTargetV8Internal::onabortAttributeGetterCallback, XMLHttpRequestEventTargetV8Internal::onabortAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onerror", XMLHttpRequestEventTargetV8Internal::onerrorAttributeGetterCallback, XMLHttpRequestEventTargetV8Internal::onerrorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onload", XMLHttpRequestEventTargetV8Internal::onloadAttributeGetterCallback, XMLHttpRequestEventTargetV8Internal::onloadAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ontimeout", XMLHttpRequestEventTargetV8Internal::ontimeoutAttributeGetterCallback, XMLHttpRequestEventTargetV8Internal::ontimeoutAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onloadend", XMLHttpRequestEventTargetV8Internal::onloadendAttributeGetterCallback, XMLHttpRequestEventTargetV8Internal::onloadendAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8XMLHttpRequestEventTargetTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "XMLHttpRequestEventTarget", V8EventTarget::domTemplate(isolate), V8XMLHttpRequestEventTarget::internalFieldCount,
        0, 0,
        V8XMLHttpRequestEventTargetAccessors, WTF_ARRAY_LENGTH(V8XMLHttpRequestEventTargetAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8XMLHttpRequestEventTarget::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XMLHttpRequestEventTargetTemplate);
}

bool V8XMLHttpRequestEventTarget::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XMLHttpRequestEventTarget::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XMLHttpRequestEventTarget* V8XMLHttpRequestEventTarget::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8XMLHttpRequestEventTarget::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8XMLHttpRequestEventTarget::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink