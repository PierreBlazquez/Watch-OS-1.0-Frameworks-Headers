//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

#pragma mark Typedef'd Structures

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union _GLKVector2 {
    CDStruct_b2fbf00d _field1;
    CDStruct_b2fbf00d _field2;
    float _field3[2];
};

union _GLKVector4 {
    CDStruct_818bb265 _field1;
    CDStruct_818bb265 _field2;
    CDStruct_818bb265 _field3;
    float _field4[4];
};
