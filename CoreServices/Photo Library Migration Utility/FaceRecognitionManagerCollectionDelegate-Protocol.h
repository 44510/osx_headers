//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FaceRecognitionManagerCollectionDelegate
- (void)releasePhoto:(void *)arg1 withUserInfo:(void *)arg2 sender:(id)arg3 phase:(int)arg4 context:(void *)arg5;
- (void *)photoAtIndex:(unsigned long long)arg1 inPhotos:(void *)arg2 userInfo:(void **)arg3 sender:(id)arg4 phase:(int)arg5 context:(void *)arg6;
- (unsigned long long)numberOfPhotos:(void *)arg1 sender:(id)arg2 phase:(int)arg3 context:(void *)arg4;
- (void)faceRecognitionDidEnd:(id)arg1 phase:(int)arg2 context:(void *)arg3;
- (void)faceRecognitionProcessedItemAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 phase:(int)arg3 abort:(char *)arg4 sender:(id)arg5 context:(void *)arg6;
- (void)faceRecognitionDidStart:(id)arg1 phase:(int)arg2 context:(void *)arg3;
@end

