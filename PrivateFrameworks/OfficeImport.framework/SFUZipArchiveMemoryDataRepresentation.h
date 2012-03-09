/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    NSData *mData;
}


- (void)dealloc;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (BOOL)isReadable;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;

@end