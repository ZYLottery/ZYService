//
//  ZYServicePage.h
//  ZYServers
//
//  Created by 何伟东 on 16/9/8.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZYServicePage : NSObject

/**
 *  请求分页的页码，起始值为0，默认值0
 */
@property(nonatomic,assign) int pageIndex;
/**
 *  请求分页的大小，当前默认值20
 */
@property(nonatomic,assign) int pageSize;
/**
 *  总共个数
 */
@property(nonatomic,assign) int total;



@end
