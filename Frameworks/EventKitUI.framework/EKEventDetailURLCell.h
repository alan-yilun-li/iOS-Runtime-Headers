/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel, UITextView;

@interface EKEventDetailURLCell : EKEventDetailCell {
    UILabel *_URLTitleView;
    UITextView *_URLView;
}

- (id)_URLTitleView;
- (id)_URLView;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(int)arg3;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (void)setURL:(id)arg1;
- (BOOL)update;

@end