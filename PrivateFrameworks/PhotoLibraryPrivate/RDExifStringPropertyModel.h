//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSDate, NSString, RDExifStringPropertyTable;

@interface RDExifStringPropertyModel : RDModel
{
}

+ (Class)tableClass;
@property(retain, nonatomic) NSDate *modDate;
@property(nonatomic) long long searchStringId;
@property(nonatomic) long long stringId;
@property(retain, nonatomic) NSString *propertyKey;
@property(nonatomic) long long versionId;
@property(readonly, nonatomic) RDExifStringPropertyTable *table;

@end

