/*
 Copyright (c) 2014 ideawu. All rights reserved.
 Use of this source code is governed by a license that can be
 found in the LICENSE file.
 
 @author:  ideawu
 @website: http://www.cocoaui.com/
 */

#ifndef IKit_IPullRefresh_h
#define IKit_IPullRefresh_h

#import <UIKit/UIKit.h>
#import "IView.h"

@class IRefreshControl;

@protocol IPullRefreshDelegate <NSObject>
//@optional
- (void)onRefresh:(IView *)view state:(IRefreshState)state;
@end


@interface IPullRefresh : NSObject <UIScrollViewDelegate>

@property (nonatomic, weak) id<IPullRefreshDelegate> delegate;

@property (nonatomic) IRefreshControl *headerView;
@property (nonatomic) IRefreshControl *footerView;

/**
 * The visible portion of headerView to trigger a IRefreshBegin event, default is 1.0
 */
@property (nonatomic) CGFloat headerVisibleRateToRefresh;
/**
 * The visible portion of footerView to trigger a IRefreshBegin event, default is 1.0
 */
@property (nonatomic) CGFloat footerVisibleRateToRefresh;

- (id)initWithScrollView:(UIScrollView *)scrollView;

// these are the methods that a UIScrollViewDelegate should call
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidScroll:(UIScrollView*)scrollView;

- (void)beginRefreshControll:(IView *)view;
- (void)endRefreshControll:(IView *)view;

@end


#endif
