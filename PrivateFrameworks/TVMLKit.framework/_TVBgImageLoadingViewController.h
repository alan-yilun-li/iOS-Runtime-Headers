/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController, _TVAppNavigationBarDisplayConfiguring> {
    BOOL  _appliedNavigationItem;
    TVImageProxy * _bgImageProxy;
    BOOL  _navigationBarHidden;
    UIColor * _navigationItemColor;
    IKViewElement * _navigationItemElement;
    BOOL  _prefersDarkTheme;
    BOOL  _statusBarBlurHidden;
}

@property (nonatomic) BOOL appliedNavigationItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) IKViewElement *navigationItemElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_backdropStyle;
- (id)_backgroundImageProxy;
- (struct CGSize { float x1; float x2; })_backgroundImageProxySize;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_reparentNavigationItem:(id)arg1;
- (void)_updateNavigationItem;
- (BOOL)appliedNavigationItem;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadFromViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)navigationBarTintColor;
- (id)navigationItemElement;
- (int)preferredStatusBarStyle;
- (BOOL)prefersNavigationBarBackgroundViewHidden;
- (BOOL)prefersStatusBarBlurHidden;
- (BOOL)prefersStatusBarDarkTheme;
- (void)setAppliedNavigationItem:(BOOL)arg1;
- (void)setNavigationItemElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
