//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKTiledLayoutGenerator.h>

@interface CKHorizontalTiledLayoutGenerator : CKTiledLayoutGenerator
{
    struct CGPoint _origin;
    float _referenceHeight;
}

@property(nonatomic) float referenceHeight; // @synthesize referenceHeight=_referenceHeight;
- (float)referenceDistanceForMagneticGuidelines;
- (BOOL)parseNextTiles;
- (void)_enumerateColumnFramesWithContiguousTiles:(CDStruct_2e802c68 *)arg1 count:(int)arg2 useMagneticGuidelines:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (BOOL)_scanNonPanoramaSequence:(CDStruct_2e802c68 *)arg1 count:(int)arg2;
- (BOOL)_isAtEndOfColumn;
- (BOOL)_addSpecialSequenceBlock:(CDStruct_2e802c68 *)arg1;
- (BOOL)_scanSpecialSequenceColumn:(CDStruct_2e802c68 *)arg1 count:(int *)arg2;
- (BOOL)_scanSpecialSequenceBlock:(CDStruct_2e802c68 *)arg1;
- (BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg1 columnParsed:(char *)arg2;
- (BOOL)_scanTripletWithLargeLead:(CDStruct_2e802c68 *)arg1;
- (BOOL)_hasLeftSuboptimalColumn;
- (BOOL)_addColumnWithContiguousTiles:(CDStruct_2e802c68 *)arg1 count:(int)arg2;
- (BOOL)_addColumnWithTiles:(CDStruct_2e802c68 *)arg1 imageFrames:(struct CGRect *)arg2 count:(int)arg3;
- (BOOL)_parseSingleTile;
- (BOOL)_parseTilePair;
- (BOOL)_parseTileTriplet;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseSpecialSequence;
- (void)willParseTiles;

@end

