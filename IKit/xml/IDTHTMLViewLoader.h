/*
 Copyright (c) 2014-2015 ideawu. All rights reserved.
 Use of this source code is governed by a license that can be
 found in the LICENSE file.
 
 @author:  ideawu
 @website: http://www.cocoaui.com/
 */

#import <Foundation/Foundation.h>
#import "DTHTMLParser.h"

@class IViewLoader;

@interface IDTHTMLViewLoader : NSObject <DTHTMLParserDelegate>{
	IViewLoader *_viewLoader;
}

- (void)parseXml:(NSString *)xml viewLoader:(IViewLoader *)viewLoader;

@end
