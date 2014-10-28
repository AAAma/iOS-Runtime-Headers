/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBasebandPowerToolKPIs : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int timestamp : 1; 
        unsigned int armUtilityThresholdPoint : 1; 
        unsigned int radarPriority : 1; 
    } _armUtilityPDFs;
    int _armUtilityThresholdPoint;
    } _causeCodeBackgroundActivityARMUtilitys;
    } _causeCodeBackgroundActivityDurations;
    } _causeCodeCumulativeARMUtilitys;
    } _causeCodeCumulativeDurations;
    } _causeCodeMarginalCoverageARMUtilitys;
    } _causeCodeMarginalCoverageDurations;
    } _causeCodeOOSARMUtilitys;
    } _causeCodeOOSDurations;
    } _causeCodeRACHFailARMUtilitys;
    } _causeCodeRACHFailDurations;
    } _causeCodeStruckInDCHARMUtilitys;
    } _causeCodeStruckInDCHDurations;
    } _causeCodeTcXONotShuttingARMUtilitys;
    } _causeCodeTcXONotShuttingDurations;
    } _causeCodeUnknownARMUtilitys;
    } _causeCodeUnknownDurations;
    } _has;
    int _radarPriority;
    unsigned long long _timestamp;
}

@property(readonly) int* armUtilityPDFs;
@property(readonly) unsigned int armUtilityPDFsCount;
@property int armUtilityThresholdPoint;
@property(readonly) int* causeCodeBackgroundActivityARMUtilitys;
@property(readonly) unsigned int causeCodeBackgroundActivityARMUtilitysCount;
@property(readonly) int* causeCodeBackgroundActivityDurations;
@property(readonly) unsigned int causeCodeBackgroundActivityDurationsCount;
@property(readonly) int* causeCodeCumulativeARMUtilitys;
@property(readonly) unsigned int causeCodeCumulativeARMUtilitysCount;
@property(readonly) int* causeCodeCumulativeDurations;
@property(readonly) unsigned int causeCodeCumulativeDurationsCount;
@property(readonly) int* causeCodeMarginalCoverageARMUtilitys;
@property(readonly) unsigned int causeCodeMarginalCoverageARMUtilitysCount;
@property(readonly) int* causeCodeMarginalCoverageDurations;
@property(readonly) unsigned int causeCodeMarginalCoverageDurationsCount;
@property(readonly) int* causeCodeOOSARMUtilitys;
@property(readonly) unsigned int causeCodeOOSARMUtilitysCount;
@property(readonly) int* causeCodeOOSDurations;
@property(readonly) unsigned int causeCodeOOSDurationsCount;
@property(readonly) int* causeCodeRACHFailARMUtilitys;
@property(readonly) unsigned int causeCodeRACHFailARMUtilitysCount;
@property(readonly) int* causeCodeRACHFailDurations;
@property(readonly) unsigned int causeCodeRACHFailDurationsCount;
@property(readonly) int* causeCodeStruckInDCHARMUtilitys;
@property(readonly) unsigned int causeCodeStruckInDCHARMUtilitysCount;
@property(readonly) int* causeCodeStruckInDCHDurations;
@property(readonly) unsigned int causeCodeStruckInDCHDurationsCount;
@property(readonly) int* causeCodeTcXONotShuttingARMUtilitys;
@property(readonly) unsigned int causeCodeTcXONotShuttingARMUtilitysCount;
@property(readonly) int* causeCodeTcXONotShuttingDurations;
@property(readonly) unsigned int causeCodeTcXONotShuttingDurationsCount;
@property(readonly) int* causeCodeUnknownARMUtilitys;
@property(readonly) unsigned int causeCodeUnknownARMUtilitysCount;
@property(readonly) int* causeCodeUnknownDurations;
@property(readonly) unsigned int causeCodeUnknownDurationsCount;
@property BOOL hasArmUtilityThresholdPoint;
@property BOOL hasRadarPriority;
@property BOOL hasTimestamp;
@property int radarPriority;
@property unsigned long long timestamp;

- (void)addArmUtilityPDF:(int)arg1;
- (void)addCauseCodeBackgroundActivityARMUtility:(int)arg1;
- (void)addCauseCodeBackgroundActivityDurations:(int)arg1;
- (void)addCauseCodeCumulativeARMUtility:(int)arg1;
- (void)addCauseCodeCumulativeDurations:(int)arg1;
- (void)addCauseCodeMarginalCoverageARMUtility:(int)arg1;
- (void)addCauseCodeMarginalCoverageDurations:(int)arg1;
- (void)addCauseCodeOOSARMUtility:(int)arg1;
- (void)addCauseCodeOOSDurations:(int)arg1;
- (void)addCauseCodeRACHFailARMUtility:(int)arg1;
- (void)addCauseCodeRACHFailDurations:(int)arg1;
- (void)addCauseCodeStruckInDCHARMUtility:(int)arg1;
- (void)addCauseCodeStruckInDCHDurations:(int)arg1;
- (void)addCauseCodeTcXONotShuttingARMUtility:(int)arg1;
- (void)addCauseCodeTcXONotShuttingDurations:(int)arg1;
- (void)addCauseCodeUnknownARMUtility:(int)arg1;
- (void)addCauseCodeUnknownDurations:(int)arg1;
- (int)armUtilityPDFAtIndex:(unsigned int)arg1;
- (int*)armUtilityPDFs;
- (unsigned int)armUtilityPDFsCount;
- (int)armUtilityThresholdPoint;
- (int)causeCodeBackgroundActivityARMUtilityAtIndex:(unsigned int)arg1;
- (int*)causeCodeBackgroundActivityARMUtilitys;
- (unsigned int)causeCodeBackgroundActivityARMUtilitysCount;
- (int*)causeCodeBackgroundActivityDurations;
- (int)causeCodeBackgroundActivityDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)causeCodeBackgroundActivityDurationsCount;
- (int)causeCodeCumulativeARMUtilityAtIndex:(unsigned int)arg1;
- (int*)causeCodeCumulativeARMUtilitys;
- (unsigned int)causeCodeCumulativeARMUtilitysCount;
- (int*)causeCodeCumulativeDurations;
- (int)causeCodeCumulativeDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)causeCodeCumulativeDurationsCount;
- (int)causeCodeMarginalCoverageARMUtilityAtIndex:(unsigned int)arg1;
- (int*)causeCodeMarginalCoverageARMUtilitys;
- (unsigned int)causeCodeMarginalCoverageARMUtilitysCount;
- (int*)causeCodeMarginalCoverageDurations;
- (int)causeCodeMarginalCoverageDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)causeCodeMarginalCoverageDurationsCount;
- (int)causeCodeOOSARMUtilityAtIndex:(unsigned int)arg1;
- (int*)causeCodeOOSARMUtilitys;
- (unsigned int)causeCodeOOSARMUtilitysCount;
- (int*)causeCodeOOSDurations;
- (int)causeCodeOOSDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)causeCodeOOSDurationsCount;
- (int)causeCodeRACHFailARMUtilityAtIndex:(unsigned int)arg1;
- (int*)causeCodeRACHFailARMUtilitys;
- (unsigned int)causeCodeRACHFailARMUtilitysCount;
- (int*)causeCodeRACHFailDurations;
- (int)causeCodeRACHFailDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)causeCodeRACHFailDurationsCount;
- (int)causeCodeStruckInDCHARMUtilityAtIndex:(unsigned int)arg1;
- (int*)causeCodeStruckInDCHARMUtilitys;
- (unsigned int)causeCodeStruckInDCHARMUtilitysCount;
- (int*)causeCodeStruckInDCHDurations;
- (int)causeCodeStruckInDCHDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)causeCodeStruckInDCHDurationsCount;
- (int)causeCodeTcXONotShuttingARMUtilityAtIndex:(unsigned int)arg1;
- (int*)causeCodeTcXONotShuttingARMUtilitys;
- (unsigned int)causeCodeTcXONotShuttingARMUtilitysCount;
- (int*)causeCodeTcXONotShuttingDurations;
- (int)causeCodeTcXONotShuttingDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)causeCodeTcXONotShuttingDurationsCount;
- (int)causeCodeUnknownARMUtilityAtIndex:(unsigned int)arg1;
- (int*)causeCodeUnknownARMUtilitys;
- (unsigned int)causeCodeUnknownARMUtilitysCount;
- (int*)causeCodeUnknownDurations;
- (int)causeCodeUnknownDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)causeCodeUnknownDurationsCount;
- (void)clearArmUtilityPDFs;
- (void)clearCauseCodeBackgroundActivityARMUtilitys;
- (void)clearCauseCodeBackgroundActivityDurations;
- (void)clearCauseCodeCumulativeARMUtilitys;
- (void)clearCauseCodeCumulativeDurations;
- (void)clearCauseCodeMarginalCoverageARMUtilitys;
- (void)clearCauseCodeMarginalCoverageDurations;
- (void)clearCauseCodeOOSARMUtilitys;
- (void)clearCauseCodeOOSDurations;
- (void)clearCauseCodeRACHFailARMUtilitys;
- (void)clearCauseCodeRACHFailDurations;
- (void)clearCauseCodeStruckInDCHARMUtilitys;
- (void)clearCauseCodeStruckInDCHDurations;
- (void)clearCauseCodeTcXONotShuttingARMUtilitys;
- (void)clearCauseCodeTcXONotShuttingDurations;
- (void)clearCauseCodeUnknownARMUtilitys;
- (void)clearCauseCodeUnknownDurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArmUtilityThresholdPoint;
- (BOOL)hasRadarPriority;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)radarPriority;
- (BOOL)readFrom:(id)arg1;
- (void)setArmUtilityPDFs:(int*)arg1 count:(unsigned int)arg2;
- (void)setArmUtilityThresholdPoint:(int)arg1;
- (void)setCauseCodeBackgroundActivityARMUtilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeBackgroundActivityDurations:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeCumulativeARMUtilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeCumulativeDurations:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeMarginalCoverageARMUtilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeMarginalCoverageDurations:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeOOSARMUtilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeOOSDurations:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeRACHFailARMUtilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeRACHFailDurations:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeStruckInDCHARMUtilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeStruckInDCHDurations:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeTcXONotShuttingARMUtilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeTcXONotShuttingDurations:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeUnknownARMUtilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setCauseCodeUnknownDurations:(int*)arg1 count:(unsigned int)arg2;
- (void)setHasArmUtilityThresholdPoint:(BOOL)arg1;
- (void)setHasRadarPriority:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setRadarPriority:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end