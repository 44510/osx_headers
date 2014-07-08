//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiFilter.h>

@class LiKeyPath;

@interface LiFilter_BinaryComparison : LiFilter
{
    unsigned char _comparator;
    LiKeyPath *_property;
    id _argument;
}

@property(retain, nonatomic) id argument; // @synthesize argument=_argument;
@property(nonatomic) unsigned char comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) LiKeyPath *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)description;
- (unsigned char)filterType;
- (id)initWithTable:(id)arg1 property:(id)arg2 comparator:(unsigned char)arg3 argument:(id)arg4;

@end

