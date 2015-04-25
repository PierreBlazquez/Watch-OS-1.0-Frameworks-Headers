//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSISConstraint.h"

@class NSString;

@interface NSLayoutConstraint : NSObject <NSISConstraint>
{
    id _container;
    id _firstItem;
    id _secondItem;
    float _constant;
    float _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    unsigned long long _layoutConstraintFlags;
    float _coefficient;
    float _priority;
}

+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 constant:(float)arg6;
+ (void)activateConstraints:(id)arg1;
+ (void)deactivateConstraints:(id)arg1;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned int)arg2 metrics:(id)arg3 views:(id)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 constant:(float)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (void)_setLegacyDecodingOnly:(BOOL)arg1;
+ (void)_addOrRemoveConstraints:(id)arg1 activate:(BOOL)arg2;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7;
- (int)_constraintType;
@property BOOL shouldBeArchived;
@property(copy) NSString *symbolicConstant;
- (id)_markerAndPositiveExtraVar;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)_loweredConstantIsRounded;
- (BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(float)arg2 mutuallyExclusiveConstraints:(id *)arg3;
- (BOOL)_nsib_isRedundant;
@property float multiplier;
@property int relation;
- (void)_setMultiplier:(float)arg1;
@property float priority;
- (id)animations;
@property(getter=isActive) BOOL active;
@property(copy) NSString *identifier;
@property id container;
- (id)_identifier;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
@property float constant;
- (void)_containerGeometryDidChange;
@property int secondAttribute;
@property int firstAttribute;
- (void)_addToEngine:(id)arg1;
- (void)_removeFromEngine:(id)arg1;
@property id secondItem; // @synthesize secondItem=_secondItem;
- (id)_layoutEngine;
- (void)setAnimations:(id)arg1;
@property id firstItem; // @synthesize firstItem=_firstItem;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_loweredExpression;
- (BOOL)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (void)_clearWeakContainerReference;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (int)_primitiveConstraintType;
- (void)_setDeferDTraceLogging:(BOOL)arg1;
- (BOOL)_deferDTraceLogging;
- (void)_setNegativeExtraVar:(id)arg1;
- (id)_negativeExtraVar;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (float)_fudgeIncrement;
- (BOOL)_isFudgeable;
- (BOOL)_isIBPrototypingLayoutConstraint;
@property(nonatomic, getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:) BOOL loweredConstantNeedsUpdate;
- (void)_setSecondAttribute:(int)arg1;
- (void)_setSecondItem:(id)arg1;
- (void)_setRelation:(int)arg1;
- (void)_setFirstAttribute:(int)arg1;
- (void)_setFirstItem:(id)arg1;
- (BOOL)_nsib_isRedundantInEngine:(id)arg1;
- (void)_makeExtraVars;
- (float)priorityForVariable:(id)arg1;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_priorityDescription;
- (id)equationDescription;
- (id)asciiArtDescription;
- (id)descriptionAccessory;
- (id)_descriptionforSymbolicConstant;
- (void)_setSymbolicConstant:(id)arg1 constant:(float)arg2;
- (BOOL)_effectiveConstant:(float *)arg1 error:(id *)arg2;
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(CDUnknownBlockType)arg1;
- (void)_setSymbolicConstant:(id)arg1;
- (void)_ensureValueMaintainsArbitraryLimit:(float *)arg1;
- (id)_symbolicConstant;
- (float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float *)arg1;
- (BOOL)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(float)arg3 lastLoweredConstantWasRounded:(BOOL)arg4 mutuallyExclusiveConstraints:(id *)arg5;
- (BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(char *)arg2;
- (void)setHasBeenLowered:(BOOL)arg1;
- (struct CGSize)_engineToContainerScalingCoefficients;
- (float)_allowedMagnitudeForIntegralizationAdjustment;
- (void)_setIdentifier:(id)arg1;
- (id)_constantDescriptionForDTrace;
@property(readonly) BOOL hasBeenLowered;
- (float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

