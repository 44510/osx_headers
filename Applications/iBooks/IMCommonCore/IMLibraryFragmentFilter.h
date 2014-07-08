//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary;

@interface IMLibraryFragmentFilter : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_identifiedDocuments;
    CDStruct_fd921134 _specification;
}

+ (CDStruct_92de0e9e)fragmentFilterSpecificationForDocumentLength:(long long)arg1 librarySpecification:(CDStruct_fd921134)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)candidateIdentifiersForQuery:(id)arg1;
- (id)allIdentifiers;
- (unsigned long long)documentCount;
- (BOOL)containsDocumentWithIdentifier:(id)arg1;
- (void)addDocument:(id)arg1 withIdentifier:(id)arg2;
- (void)addFilter:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFilterSpecification:(CDStruct_fd921134)arg1;

@end

