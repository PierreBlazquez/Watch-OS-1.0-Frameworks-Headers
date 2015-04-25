//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMFoundation/IMXMLParserContext.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString;

@interface IMToSuperParserContext : IMXMLParserContext
{
    unsigned int _underlineCount;
    unsigned int _boldCount;
    unsigned int _italicCount;
    unsigned int _strikethroughCount;
    unsigned int _messagePartNumber;
    NSMutableArray *_fontFamilyStack;
    NSMutableArray *_fontSizeStack;
    NSMutableArray *_linkStack;
    NSMutableArray *_backgroundColorStack;
    NSMutableArray *_foregroundColorStack;
    NSMutableDictionary *_currentAttributes;
    BOOL _didAddBodyAttributes;
    int _baseWritingDirection;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    NSMutableAttributedString *_body;
    NSMutableArray *_fileTransferGUIDs;
}

- (void)appendFileTransferWithGUID:(id)arg1;
- (void)popForegroundColor;
- (void)pushForegroundColor:(id)arg1;
- (void)popBackgroundColor;
- (void)pushBackgroundColor:(id)arg1;
- (void)popLink;
- (void)pushLink:(id)arg1;
- (void)popFontSize;
- (void)pushFontSize:(id)arg1;
- (void)popFontFamily;
- (void)pushFontFamily:(id)arg1;
- (void)decrementStrikethroughCount;
- (void)incrementStrikethroughCount;
- (void)decrementUnderlineCount;
- (void)incrementUnderlineCount;
- (void)decrementItalicCount;
- (void)incrementItalicCount;
- (void)decrementBoldCount;
- (void)incrementBoldCount;
- (void)_incrementMessagePartNumber;
- (void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(int)arg3 height:(int)arg4 emoji:(int)arg5;
- (void)_popValueFromStack:(id)arg1 attributeName:(id)arg2;
- (void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3;
- (void)_updateFontFamily;
- (void)_initIvars;
- (void)_clearIvars;
- (id)resultsForLogging;
@property(retain, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property(retain, nonatomic) NSString *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (void)_updateFontSize;
@property int baseWritingDirection; // @synthesize baseWritingDirection=_baseWritingDirection;
- (void)reset;
@property(readonly, nonatomic) NSAttributedString *body;
- (id)name;
- (void)appendString:(id)arg1;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)dealloc;

@end

