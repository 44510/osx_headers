//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSString, RDModelResourceTable;

@interface RDModelResourceModel : RDModel
{
}

+ (Class)tableClass;
@property(retain, nonatomic) NSString *filename;
@property(nonatomic) long long resourceType;
@property(nonatomic) long long attachedModelType;
@property(nonatomic) long long attachedModelId;
@property(readonly, nonatomic) RDModelResourceTable *table;

@end
