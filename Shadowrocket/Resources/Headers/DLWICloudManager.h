//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICACloud.h"

@class NSMutableDictionary;

@interface DLWICloudManager : ICACloud
{
    NSMutableDictionary *_timers;
}

+ (id)sharedQueue;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *timers; // @synthesize timers=_timers;
- (void).cxx_destruct;
- (id)notConnectedError;
- (void)performBlock:(CDUnknownBlockType)arg1 withContext:(id)arg2;
- (void)delayDownloadDocumentDataWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadDocumentDataWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadDocumentWithName:(id)arg1 toLocalFile:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)delayUploadData:(id)arg1 toDocumentName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadData:(id)arg1 toDocumentName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadLocalFile:(id)arg1 toDocumentName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDocumentWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listDocumentsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUbiquityContainerIdentifier:(id)arg1;

@end

