//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDImportGroupTable : RDTable
{
    LiKeyPath *_importYearKeyPath;
    LiKeyPath *_importMonthKeyPath;
    LiKeyPath *_importDayKeyPath;
    LiKeyPath *_importTimeKeyPath;
    LiKeyPath *_nameKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *nameKeyPath; // @synthesize nameKeyPath=_nameKeyPath;
@property(readonly, nonatomic) LiKeyPath *importTimeKeyPath; // @synthesize importTimeKeyPath=_importTimeKeyPath;
@property(readonly, nonatomic) LiKeyPath *importDayKeyPath; // @synthesize importDayKeyPath=_importDayKeyPath;
@property(readonly, nonatomic) LiKeyPath *importMonthKeyPath; // @synthesize importMonthKeyPath=_importMonthKeyPath;
@property(readonly, nonatomic) LiKeyPath *importYearKeyPath; // @synthesize importYearKeyPath=_importYearKeyPath;
- (void).cxx_destruct;
- (id)defaultLoadPropertyPaths;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPaths;
- (unsigned long long *)faultedKeyPath;
- (unsigned long long *)faultedModelKeyPath;

@end

