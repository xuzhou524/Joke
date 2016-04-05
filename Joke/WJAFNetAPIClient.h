//
//  WJAFNetAPIClient.h
//  JuanJoke
//
//  Created by wenjuan on 16/3/30.
//  Copyright © 2016年 wenjuan. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>

@interface WJAFNetAPIClient : AFHTTPSessionManager

@property (nonatomic, assign) BOOL hasNetwork;
+ (instancetype)sharedClient;

/**
 *  post请求
 * @param  URLString        url
 * @param  parameters       请求参数
 * @param  block            回调函数
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString parameters:(id)parameters compeletion:(void(^)(NSURLSessionDataTask *task,id responseObject, NSError *error))block;

/**
 *  get请求
 * @param  URLString        url
 * @param  parameters       请求参数
 * @param  block            回调函数
 */
- (NSURLSessionDataTask *)GET:(NSString *)URLString parameters:(id)parameters compeletion:(void(^)(NSURLSessionDataTask *task,id responseObject, NSError *error))block ;
@end
