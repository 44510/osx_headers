//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StorageKit/SKDisk.h>

@class NSString;

@interface SKCSPVDisk : SKDisk
{
    NSString *_csLVGUUID;
    NSString *_csDiskUUID;
}

@property(retain) NSString *csDiskUUID; // @synthesize csDiskUUID=_csDiskUUID;
@property(retain) NSString *csLVGUUID; // @synthesize csLVGUUID=_csLVGUUID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)canResize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (BOOL)matchesDictionary:(id)arg1;
- (id)minimalDictionaryRepresentation;

@end

