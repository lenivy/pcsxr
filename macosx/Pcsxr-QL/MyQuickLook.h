//
//  MyQuickLook.h
//  Pcsxr
//
//  Created by C.W. Betts on 3/28/14.
//
//

#ifndef Pcsxr_MyQuickLook_h
#define Pcsxr_MyQuickLook_h

#include <CoreFoundation/CoreFoundation.h>
#include <CoreFoundation/CFPlugInCOM.h>
#include <CoreServices/CoreServices.h>
#include <QuickLook/QuickLook.h>

// The thumbnail generation function to be implemented in GenerateThumbnailForURL.c
__private_extern__ OSStatus GenerateThumbnailForURL(void *thisInterface, QLThumbnailRequestRef thumbnail, CFURLRef url, CFStringRef contentTypeUTI, CFDictionaryRef options, CGSize maxSize);
__private_extern__ void CancelThumbnailGeneration(void* thisInterface, QLThumbnailRequestRef thumbnail);

// The preview generation function to be implemented in GeneratePreviewForURL.c
__private_extern__ OSStatus GeneratePreviewForURL(void *thisInterface, QLPreviewRequestRef preview, CFURLRef url, CFStringRef contentTypeUTI, CFDictionaryRef options);
__private_extern__ void CancelPreviewGeneration(void *thisInterface, QLPreviewRequestRef preview);

#endif