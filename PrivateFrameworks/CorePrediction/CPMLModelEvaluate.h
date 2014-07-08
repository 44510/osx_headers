//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPMLSchema, NSMutableArray, NSNumber, NSString;

@interface CPMLModelEvaluate : NSObject
{
    BOOL enableCacheString;
    BOOL keepInMemory;
    BOOL shouldFail;
    struct sqlite3 *db;
    int countRows;
    NSMutableArray *modelSchema;
    NSMutableArray *vectorPositions;
    NSNumber *maxRemoveTrainingRow;
    NSString *serializeFunction;
    NSString *machineLearningAlgo;
    struct CPMLAlgorithm *cpMLAlgo;
    struct CPMLSerialization *trainerCPDeSerializer;
    struct CPMLRemapper *cpRemapper;
    CPMLSchema *cpmlSchema;
    struct CPMLStatistics *trainerCPStatistics;
    struct CPMLTunableData *cpTuneableData;
    int mapFunction;
    vector_e0f2bd7e boundedRemappedValues;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)updateModel:(id)arg1;
- (void)boundResult:(id)arg1;
- (void)buildEvaluateMachineLearningAlgorithm;
- (id)doEvaluate:(struct CPMLFeatureVector *)arg1 withBoundedList:(vector_e0f2bd7e *)arg2;
- (void)doRemapToFeatureVector:(struct CPMLFeatureVector *)arg1 withPositionID:(unsigned long long)arg2 withMaxCol:(unsigned long long)arg3 withValue:(id)arg4;
- (id)evalDict:(id)arg1;
- (id)evalArray:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalString:(id)arg1;
- (id)evalCTypesV:(char *)arg1;
- (void)constructVector:(struct CPMLFeatureVector *)arg1 withColumnPosition:(unsigned long long)arg2 maxColNumber:(unsigned long long)arg3 withValue:(id)arg4;
- (int)getAttributeType:(id)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 withPropertyList:(id)arg2;

@end

