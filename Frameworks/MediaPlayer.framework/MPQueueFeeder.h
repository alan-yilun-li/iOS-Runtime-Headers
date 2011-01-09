/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableSet, MPAVController;



@interface MPQueueFeeder : AVQueueFeeder <NSCopying>
{
    MPAVController *_avController;
    NSMutableSet *_itemsWithReferencesToClear;
    NSUInteger _repeatType;
    NSUInteger _shuffleType;
    struct __CFDictionary { } *_nextStartTimes;
    id _representedObject;
}

@property(readonly) Class itemClass;
@property(retain,readonly) NSDictionary *preferredLanguages;
@property(readonly) BOOL trackChangesCanEndPlayback;
@property(readonly) NSUInteger realRepeatType;
@property(readonly) NSUInteger realShuffleType;
@property(retain) <NSObject> *representedObject;
@property NSUInteger shuffleType;
@property NSUInteger repeatType;
@property MPAVController *AVController;


- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_fixNextStartTimesByInsertingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_fixNextStartTimesByRemovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setNextStartTime:(double)arg1 forIndex:(NSUInteger)arg2;
- (void)shuffleItemsWithAnchor:(NSUInteger*)arg1;
- (void)dequeueOnDemandItem;
- (NSUInteger)onDemandItemIndex;
- (BOOL)reloadWithDataSource:(id)arg1;
- (Class)itemClass;
- (NSUInteger)itemTypeForIndex:(NSUInteger)arg1;
- (id)preferredLanguages;
- (BOOL)trackChangesCanEndPlayback;
- (void)addReferenceToItem:(id)arg1;
- (void)clearReferencesToItem:(id)arg1;
- (NSUInteger)realRepeatType;
- (NSUInteger)realShuffleType;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(NSUInteger)arg1;
- (BOOL)_canPurgeNextStartTimes;
- (id)playbackInfoAtIndex:(NSUInteger)arg1;
- (id)copyRawItemAtIndex:(NSUInteger)arg1;
- (id)itemForIndex:(NSUInteger)arg1;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (NSUInteger)shuffleType;
- (void)setShuffleType:(NSUInteger)arg1;
- (NSUInteger)repeatType;
- (void)setRepeatType:(NSUInteger)arg1;
- (id)AVController;
- (void)setAVController:(id)arg1;

@end