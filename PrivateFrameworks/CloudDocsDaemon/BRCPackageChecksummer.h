//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCChecksummingOutputStream, NSData;

@interface BRCPackageChecksummer : NSObject
{
    BRCChecksummingOutputStream *_stream;
}

- (void).cxx_destruct;
- (void)done;
- (void)addItem:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSData *signature;

@end

