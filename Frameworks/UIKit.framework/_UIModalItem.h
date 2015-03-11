/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIModalItemDelegate>, NSArray, NSAttributedString, NSMutableArray, NSString, UITextInputTraits, UIView, UIViewController, _UIModalItemBackgroundView, _UIModalItemContentView, _UIModalItemRepresentationView;

@interface _UIModalItem : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGSize { 
        double width; 
        double height; 
    UIViewController *_anchorViewController;
    _UIModalItemBackgroundView *_backgroundView;
    NSArray *_buttonTitles;
    long long _cancelButtonIndex;
    NSString *_cancelButtonTitle;
    id _completionBlock;
    _UIModalItemContentView *_contentView;
    UIViewController *_contentViewController;
    } _contentViewControllerSize;
    long long _defaultButtonIndex;
    NSString *_defaultButtonTitle;
    <UIModalItemDelegate> *_delegate;
    long long _dismissAnimationType;
    long long _dismissIndex;
    UIViewController *_hostingViewController;
    long long _itemType;
    NSString *_loginPlaceholderString;
    NSString *_loginString;
    UITextInputTraits *_loginTraits;
    NSString *_message;
    NSAttributedString *_messageAttributedString;
    long long _messageMaxLineNumber;
    long long _modalItemInputStyle;
    long long _numberOfButtonsRows;
    NSMutableArray *_otherButtonsTitles;
    NSString *_passwordPlaceholderString;
    NSString *_passwordString;
    UITextInputTraits *_passwordTraits;
    } _popoverTargetRect;
    UIView *_popoverTargetView;
    long long _presentAnimationType;
    _UIModalItemRepresentationView *_representedView;
    NSString *_subtitleString;
    NSString *_title;
    NSAttributedString *_titleAttributedString;
    long long _titleMaxLineNumber;
    UIViewController *_viewController;
    bool_dontUpdateFrameForKBChanges;
    bool_enableFirstOtherButton;
    bool_forceVerticalLayout;
    bool_isBeingDismissed;
    bool_isHidden;
    bool_isPresented;
    bool_isVisible;
    bool_textFieldsHidden;
    bool_useUndoStyle;
    bool_useWifiPickerLayout;
    long long cancelButtonIndex;
}

@property(getter=_viewController,setter=_setViewController:,retain) UIViewController * _viewController;
@property(retain) _UIModalItemBackgroundView * backgroundView;
@property(copy) NSArray * buttonTitles;
@property long long cancelButtonIndex;
@property(retain) _UIModalItemContentView * contentView;
@property(retain) UIViewController * contentViewController;
@property struct CGSize { double x1; double x2; } contentViewControllerSize;
@property long long defaultButtonIndex;
@property <UIModalItemDelegate> * delegate;
@property long long dismissAnimationType;
@property long long dismissIndex;
@property bool dontUpdateFrameForKBChanges;
@property bool enableFirstOtherButton;
@property bool forceVerticalLayout;
@property bool isBeingDismissed;
@property bool isHidden;
@property(readonly) bool isPresented;
@property(copy) NSString * loginPlaceholderString;
@property(copy) NSString * loginString;
@property(copy) NSString * message;
@property(copy) NSAttributedString * messageAttributedString;
@property long long messageMaxLineNumber;
@property long long modalItemInputStyle;
@property long long numberOfButtonsRows;
@property(copy) NSString * passwordPlaceholderString;
@property(copy) NSString * passwordString;
@property long long presentAnimationType;
@property(copy) NSString * subtitleString;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;
@property UIView * targetView;
@property bool textFieldsHidden;
@property(copy) NSString * title;
@property(copy) NSAttributedString * titleAttributedString;
@property long long titleMaxLineNumber;
@property long long type;
@property bool useUndoStyle;
@property bool useWifiPickerLayout;
@property(readonly) UIViewController * viewController;

+ (id)modalItemWithType:(long long)arg1 title:(id)arg2 message:(id)arg3 buttonTitles:(id)arg4 completion:(id)arg5;

- (id)_anchorViewController;
- (id)_backgroundView;
- (id)_cancelButtonTitle;
- (id)_contentView;
- (id)_defaultButtonTitle;
- (id)_hostingViewController;
- (void)_loginFieldTextDidChange;
- (id)_loginTraits;
- (double)_maxHeight;
- (double)_maxWidth;
- (id)_otherButtonsTitles;
- (void)_passwordFieldTextDidChange;
- (id)_passwordTraits;
- (id)_popoverBackgroundView;
- (id)_representedView;
- (void)_setAnchorViewController:(id)arg1;
- (void)_setHostingViewController:(id)arg1;
- (void)_setRepresentedView:(id)arg1;
- (void)_setViewController:(id)arg1;
- (id)_typeKey;
- (void)_updateContentView;
- (id)_viewController;
- (long long)addButtonWithTitle:(id)arg1;
- (id)backgroundView;
- (id)buttonTitleAtIndex;
- (id)buttonTitles;
- (long long)cancelButtonIndex;
- (id)contentView;
- (id)contentViewController;
- (struct CGSize { double x1; double x2; })contentViewControllerSize;
- (void)dealloc;
- (long long)defaultButtonIndex;
- (id)delegate;
- (long long)dismissAnimationType;
- (long long)dismissIndex;
- (bool)dontUpdateFrameForKBChanges;
- (bool)enableFirstOtherButton;
- (bool)forceVerticalLayout;
- (id)initWithTitle:(id)arg1 message:(id)arg2 otherButtonTitles:(id)arg3 completion:(id)arg4 delegate:(id)arg5;
- (bool)isBeingDismissed;
- (bool)isHidden;
- (bool)isPresented;
- (id)loginPlaceholderString;
- (id)loginString;
- (id)message;
- (id)messageAttributedString;
- (long long)messageMaxLineNumber;
- (long long)modalItemInputStyle;
- (long long)numberOfButtonsRows;
- (id)passwordPlaceholderString;
- (id)passwordString;
- (long long)presentAnimationType;
- (void)refreshButtonTitle;
- (void)setBackgroundView:(id)arg1;
- (void)setButtonTitles:(id)arg1;
- (void)setCancelButtonIndex:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setContentViewControllerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissAnimationType:(long long)arg1;
- (void)setDismissIndex:(long long)arg1;
- (void)setDontUpdateFrameForKBChanges:(bool)arg1;
- (void)setEnableFirstOtherButton:(bool)arg1;
- (void)setForceVerticalLayout:(bool)arg1;
- (void)setIsBeingDismissed:(bool)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setLoginPlaceholderString:(id)arg1;
- (void)setLoginString:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageAttributedString:(id)arg1;
- (void)setMessageMaxLineNumber:(long long)arg1;
- (void)setModalItemInputStyle:(long long)arg1;
- (void)setNumberOfButtonsRows:(long long)arg1;
- (void)setPasswordPlaceholderString:(id)arg1;
- (void)setPasswordString:(id)arg1;
- (void)setPresentAnimationType:(long long)arg1;
- (void)setSubtitleString:(id)arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetView:(id)arg1;
- (void)setTextFieldsHidden:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAttributedString:(id)arg1;
- (void)setTitleMaxLineNumber:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUseUndoStyle:(bool)arg1;
- (void)setUseWifiPickerLayout:(bool)arg1;
- (id)subtitleString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (id)targetView;
- (id)textFieldAtIndex:(long long)arg1;
- (bool)textFieldsHidden;
- (id)title;
- (id)titleAttributedString;
- (long long)titleMaxLineNumber;
- (long long)type;
- (bool)useUndoStyle;
- (bool)useWifiPickerLayout;
- (id)viewController;

@end