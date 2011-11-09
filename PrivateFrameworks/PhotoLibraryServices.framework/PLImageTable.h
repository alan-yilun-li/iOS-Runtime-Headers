/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, NSString, NSMutableArray;

@interface PLImageTable : NSObject  {
    int _format;
    NSString *_path;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
    BOOL _readOnly;
    BOOL _dying;
    int _fid;
    unsigned long _fileLength;
    int _entryCount;
    unsigned long _segmentLength;
    int _segmentCount;
    NSMutableArray *_allSegments;
}

@property(readonly) NSDictionary * photoUUIDToIndexMap;
@property(readonly) NSString * path;
@property(readonly) int imageFormat;
@property(readonly) int imageWidth;
@property(readonly) int imageHeight;
@property(readonly) int imageRowBytes;
@property(readonly) int imageLength;
@property(readonly) BOOL isReadOnly;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scaleSize:(struct CGSize { float x1; float x2; })arg1 toFitWithinSize:(struct CGSize { float x1; float x2; })arg2;
+ (void)releaseSegmentCache;

- (id)path;
- (BOOL)isReadOnly;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)preheatImageDataAtIndexex:(id)arg1;
- (BOOL)thumbnailForAsset:(id)arg1 existsAtIndex:(int)arg2;
- (struct __CFDictionary { }*)currentAssetUUIDsToIndexesMapping;
- (int)imageRowBytes;
- (id)_tableDescription;
- (void)rotateEntryAtIndex:(int)arg1 byDegrees:(int)arg2 withWhiteInsert:(int)arg3;
- (BOOL)entryAtIndexIsPlaceholder:(int)arg1;
- (void)setImageData:(const void*)arg1 forEntryAtIndex:(int)arg2 asset:(id)arg3;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (id)photoUUIDToIndexMap;
- (void)ensureIndexExists:(int)arg1;
- (int)entryCount;
- (void)fileLengthChangedExternally;
- (void)_releaseSegment:(id)arg1;
- (unsigned long)_segmentLength;
- (int)_fileDescriptor;
- (void)_setEntryAtIndex:(int)arg1 imageData:(const void*)arg2 actualImageSize:(struct CGSize { float x1; float x2; })arg3;
- (int)imageLength;
- (int)imageHeight;
- (int)imageWidth;
- (void)_writeImage:(id)arg1 withDuration:(id)arg2 photoUUID:(id)arg3 toEntryAtIndex:(int)arg4 isPlaceholder:(BOOL)arg5;
- (BOOL)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id*)arg2;
- (id)_mappedImageDataAtIndex:(int)arg1;
- (void)_addEntriesIfNecessaryForIndex:(int)arg1;
- (void)_setEntryCount:(int)arg1;
- (void)_updateSegmentCount;
- (void)_reloadSegmentAtIndex:(int)arg1;
- (id)_segmentAtIndex:(int)arg1;
- (void)_releaseSegmentAtIndex:(int)arg1;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(BOOL)arg3;
- (void)deleteEntryAtIndex:(int)arg1;
- (id)imageDataAtIndex:(int)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 dataOffset:(int*)arg7;
- (id)dataForEntryAtIndex:(int)arg1;
- (void)setImage:(id)arg1 forEntryAtIndex:(int)arg2 videoDuration:(id)arg3 photoUUID:(id)arg4 isPlaceholder:(BOOL)arg5;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (int)imageFormat;
- (void)dealloc;

@end