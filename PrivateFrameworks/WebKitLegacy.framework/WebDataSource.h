//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableURLRequest, NSString, NSURL, NSURLRequest, NSURLResponse, WebArchive, WebFrame, WebResource;

@interface WebDataSource : NSObject
{
    void *_private;
}

+ (id)_repTypesAllowImageTypeOmission:(BOOL)arg1;
+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (void)initialize;
@property(readonly, nonatomic) NSURLRequest *initialRequest;
- (id)_initWithDocumentLoader:(PassRefPtr_a1b5a79e)arg1;
- (struct DocumentLoader *)_documentLoader;
- (void)_makeRepresentation;
- (BOOL)_isDocumentHTML;
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(BOOL)arg2;
- (void)_revertToProvisionalState;
- (void)_setMainDocumentError:(id)arg1;
- (void)_receivedData:(id)arg1;
- (void)_finishedLoading;
- (id)_webView;
- (void)addSubresource:(id)arg1;
- (id)_imageElementWithImageResource:(id)arg1;
- (id)_documentFragmentWithImageResource:(id)arg1;
- (id)_documentFragmentWithArchive:(id)arg1;
- (void)_setOverrideTextEncodingName:(id)arg1;
- (void)_setDeferMainResourceDataLoad:(BOOL)arg1;
- (BOOL)_transferApplicationCache:(id)arg1;
- (void)_addSubframeArchives:(id)arg1;
- (id)_mainDocumentError;
- (id)dataSourceDelegate;
- (void)_setRepresentation:(id)arg1;
- (void)_setAllowToBeMemoryMapped;
- (void)setDataSourceDelegate:(id)arg1;
- (void)finalize;
@property(readonly, nonatomic) WebResource *mainResource;
@property(readonly, copy, nonatomic) NSArray *subresources;
@property(readonly, nonatomic) NSURL *unreachableURL;
@property(readonly, copy, nonatomic) NSString *pageTitle;
@property(readonly, nonatomic) WebArchive *webArchive;
- (id)initWithRequest:(id)arg1;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
@property(readonly, nonatomic) WebFrame *webFrame;
- (id)_responseMIMEType;
@property(readonly, nonatomic) NSURLResponse *response;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) id <WebDocumentRepresentation> representation;
@property(readonly, nonatomic) NSMutableURLRequest *request;
- (void)dealloc;
- (id)subresourceForURL:(id)arg1;
@property(readonly, copy, nonatomic) NSString *textEncodingName;
- (id)_URL;

@end

