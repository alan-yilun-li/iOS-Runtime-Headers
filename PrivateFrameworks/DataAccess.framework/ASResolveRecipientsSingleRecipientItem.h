/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSString, ASResolveRecipientsCertificatesItem;

@interface ASResolveRecipientsSingleRecipientItem : ASItem  {
    NSString *_emailAddress;
    ASResolveRecipientsCertificatesItem *_certificates;
}

@property(retain) NSString * emailAddress;
@property(retain) ASResolveRecipientsCertificatesItem * certificates;

+ (id)asParseRules;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)description;
- (id)emailAddress;
- (id)certificates;
- (void)setCertificates:(id)arg1;
- (void)setEmailAddress:(id)arg1;

@end