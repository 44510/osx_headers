//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class BuddyPicture, IMHandle, NSString;

@interface PersonIconView : NSView
{
    IMHandle *_imHandle;
    NSString *_pictureKey;
    BuddyPicture *_picture;
    BOOL _shouldAnimate;
}

- (void)_pictureChanged:(id)arg1;
- (void)dealloc;
- (void)setBuddyPicture:(id)arg1;
- (void)setPictureKey:(id)arg1;
- (void)_needsDrawFromAnimate:(id)arg1;
- (void)setShouldAnimate:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setIMHandle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withIMHandle:(id)arg2;

@end

