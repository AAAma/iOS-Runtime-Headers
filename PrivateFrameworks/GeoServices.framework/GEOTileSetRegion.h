/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetRegion : PBCodable  {
    unsigned int _minX;
    unsigned int _minY;
    unsigned int _maxX;
    unsigned int _maxY;
    unsigned int _minZ;
    unsigned int _maxZ;
}

@property unsigned int minX;
@property unsigned int minY;
@property unsigned int maxX;
@property unsigned int maxY;
@property unsigned int minZ;
@property unsigned int maxZ;


- (id)description;
- (void)dealloc;
- (BOOL)containsTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 enforceZoomLevel:(BOOL)arg2;
- (unsigned int)maxZ;
- (unsigned int)minZ;
- (unsigned int)maxY;
- (unsigned int)minY;
- (unsigned int)minX;
- (void)setMaxZ:(unsigned int)arg1;
- (void)setMinZ:(unsigned int)arg1;
- (void)setMaxY:(unsigned int)arg1;
- (void)setMinY:(unsigned int)arg1;
- (void)setMinX:(unsigned int)arg1;
- (unsigned int)maxX;
- (void)setMaxX:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end