/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray;



@interface IMAPMessage : MailMessage 
{
    NSUInteger _size;
    struct { 
        unsigned int reserved : 26; 
        unsigned int hasCustomEncoding : 1; 
        unsigned int isPartial : 1; 
        unsigned int hasTemporaryUid : 1; 
        unsigned int isHTML : 1; 
        unsigned int isRich : 1; 
    } _imapFlags;
    NSArray *_customFlags;
    NSUInteger _uid;
}

+ (void)initialize;

- (id)initWithFlags:(unsigned long)arg1 customFlags:(id)arg2 size:(NSUInteger)arg3 uid:(unsigned long)arg4;
- (void)dealloc;
- (id)description;
- (NSUInteger)messageSize;
- (id)messageID;
- (NSInteger)compareByNumberWithMessage:(id)arg1;
- (unsigned long)uid;
- (void)setUid:(unsigned long)arg1;
- (BOOL)isPartial;
- (void)setIsPartial:(BOOL)arg1;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (BOOL)hasTemporaryUid;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (struct { unsigned int x1 : 26; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; })imapFlags;
- (id)customFlags;
- (id)mailboxName;
- (id)remoteID;
- (id)remoteMailboxURL;
- (id)originalMailboxURL;

@end