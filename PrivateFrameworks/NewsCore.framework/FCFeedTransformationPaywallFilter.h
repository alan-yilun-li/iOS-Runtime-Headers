/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationPaywallFilter : NSObject <FCFeedTransforming> {
    NSSet * _purchasedTagIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSSet *purchasedTagIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPurchasedTagIDs:(id)arg1;
- (id)purchasedTagIDs;
- (void)setPurchasedTagIDs:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end