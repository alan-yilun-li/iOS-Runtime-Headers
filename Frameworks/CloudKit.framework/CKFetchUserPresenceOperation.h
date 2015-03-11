/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKShareID, NSError, NSMutableArray;

@interface CKFetchUserPresenceOperation : CKOperation {
    id _fetchUserPresenceCompletionBlock;
    CKShareID *_shareID;
    NSMutableArray *_userPresence;
}

@property(retain) NSError * error;
@property(copy) id fetchUserPresenceCompletionBlock;
@property(retain) CKShareID * shareID;
@property(retain) NSMutableArray * userPresence;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)fetchUserPresenceCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithShareID:(id)arg1;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setFetchUserPresenceCompletionBlock:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setUserPresence:(id)arg1;
- (id)shareID;
- (id)userPresence;

@end