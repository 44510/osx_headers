//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDModelResourceTable : RDTable
{
    LiKeyPath *_attachedModelIdKeyPath;
    LiKeyPath *_attachedModelTypeKeyPath;
    LiKeyPath *_resourceTypeKeyPath;
    LiKeyPath *_filenameKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *filenameKeyPath; // @synthesize filenameKeyPath=_filenameKeyPath;
@property(readonly, nonatomic) LiKeyPath *resourceTypeKeyPath; // @synthesize resourceTypeKeyPath=_resourceTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *attachedModelTypeKeyPath; // @synthesize attachedModelTypeKeyPath=_attachedModelTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *attachedModelIdKeyPath; // @synthesize attachedModelIdKeyPath=_attachedModelIdKeyPath;
- (void).cxx_destruct;
- (id)defaultLoadPropertyPaths;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPaths;
- (unsigned long long *)faultedKeyPath;
- (unsigned long long *)faultedModelKeyPath;

@end

