//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct __CFString;

struct __DDExpressionPosition {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct __DDQueryOffset {
    int _field1;
    int _field2;
};

struct __DDResult {
    struct __CFRuntimeBase {
        unsigned int _field1;
        unsigned char _field2[4];
    } _field1;
    struct __DDQueryRange {
        struct __DDQueryOffset _field1;
        struct __DDQueryOffset _field2;
    } _field2;
    CDStruct_1ef3fb1f _field3;
    int _field4;
    struct __CFArray *_field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    void *_field8;
    void *_field9;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

