//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABTask.h>

@class ABLocalImageLoader, NSArray;

__attribute__((visibility("hidden")))
@interface ABLocalThumbnailImageTask : ABTask
{
    NSArray *_imageIdentifiers;
    ABLocalImageLoader *_imageLoader;
}

- (id)run:(id *)arg1;
- (void)dealloc;
- (id)initWithImageIdentifiers:(id)arg1 imagesFolder:(id)arg2;

@end
