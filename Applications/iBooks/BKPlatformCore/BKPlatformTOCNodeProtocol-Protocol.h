//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSImage, NSString;

@protocol BKPlatformTOCNodeProtocol <NSObject>
@property(readonly, nonatomic) NSImage *nodeSelectedTitleImage;
@property(readonly, nonatomic) NSImage *nodeTitleImage;
@property(readonly, nonatomic) NSImage *nodeImage;
@property(readonly, nonatomic) NSString *nodePageNumber;
@property(readonly, nonatomic) NSString *nodeSubTitle;
@property(readonly, nonatomic) NSString *nodeTtitle;
@property(readonly, nonatomic) unsigned long long nodeLevel;
@property(readonly, nonatomic) NSArray *nodeChildren;
@end
