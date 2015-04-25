//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    float _field1;
    float _field2;
};

struct CallbackData {
    struct CallbackData *_field1;
    id _field2;
    id _field3;
    struct OpaqueJSValue *_field4;
    struct OpaqueJSValue *_field5;
    unsigned int _field6;
    struct OpaqueJSValue **_field7;
    id _field8;
};

struct HashMap<id, JSC::Weak<JSC::JSObject>, WTF::PtrHash<id>, WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject>>> {
    struct HashTable<id, WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject>>>, WTF::PtrHash<id>, WTF::HashMap<id, JSC::Weak<JSC::JSObject>, WTF::PtrHash<id>, WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject>>>::KeyValuePairTraits, WTF::HashTraits<id>> m_impl;
};

struct HashTable<id, WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject>>>, WTF::PtrHash<id>, WTF::HashMap<id, JSC::Weak<JSC::JSObject>, WTF::PtrHash<id>, WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject>>>::KeyValuePairTraits, WTF::HashTraits<id>> {
    struct KeyValuePair<id, JSC::Weak<JSC::JSObject>> *m_table;
    int m_tableSize;
    int m_tableSizeMask;
    int m_keyCount;
    int m_deletedCount;
};

struct JSLock;

struct JSValue {
    union EncodedValueDescriptor u;
};

struct KeyValuePair<id, JSC::Weak<JSC::JSObject>>;

struct OpaqueJSValue;

struct RefPtr<JSC::JSLock> {
    struct JSLock *m_ptr;
};

struct Strong<JSC::JSObject> {
    struct JSValue *m_slot;
};

struct Weak<JSC::JSGlobalObject> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::JSObject> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::JSString> {
    struct WeakImpl *m_impl;
};

struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>> {
    struct HashMap<id, JSC::Weak<JSC::JSObject>, WTF::PtrHash<id>, WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject>>> m_map;
    int m_gcThreshold;
};

struct WeakImpl;

struct WeakValueRef {
    int m_tag;
    union WeakValueUnion u;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

#pragma mark Named Unions

union EncodedValueDescriptor {
    long long asInt64;
    double asDouble;
    struct {
        int payload;
        int tag;
    } asBits;
};

union WeakValueUnion {
    struct JSValue m_primitive;
    struct Weak<JSC::JSObject> m_object;
    struct Weak<JSC::JSString> m_string;
};

