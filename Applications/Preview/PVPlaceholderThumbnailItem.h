//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PVPlaceholderThumbnailItem : NSObject
{
    NSString *_uuid;
    id _parentContainer;
}

@property(retain) id parentContainer; // @synthesize parentContainer=_parentContainer;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageUID;
- (void)dealloc;

@end

