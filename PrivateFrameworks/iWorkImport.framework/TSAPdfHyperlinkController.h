/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray;

@interface TSAPdfHyperlinkController : NSObject {
    NSMutableArray *mHyperlinks;
}

- (void)addHyperlinkForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withUrl:(id)arg2 context:(struct CGContext { }*)arg3;
- (void)addHyperlinksForContents:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)addHyperlinksForRep:(id)arg1 context:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvasRect;
- (void)commitHyperlinksToPDF:(struct CGContext { }*)arg1 targetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)destinationFromUrl:(id)arg1;
- (bool)ignoreUrl:(id)arg1;
- (id)init;
- (bool)isDestination:(id)arg1;
- (id)p_chopBezierIntoRects:(id)arg1;
- (void)p_combineSimilarElements:(id)arg1;
- (void)p_commitDestinationToPDF:(id)arg1 cgrect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)p_commitUrlToPDF:(id)arg1 cgrect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (id)p_hyperlinkRegionsForRep:(id)arg1 context:(struct CGContext { }*)arg2;
- (id)p_splitIntoSubshapes:(id)arg1;

@end