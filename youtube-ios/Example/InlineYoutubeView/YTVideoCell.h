//
//  YTVideoView.h
//  InlineYoutubeView
//
//  Created by SHUBHANKAR YASH on 31/01/18.
//  Copyright © 2018 shubhankaryash. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
@import UIKit;
#import <InlineYoutubeView/InlineYoutubeView.h>

@interface YTVideoCell : UITableViewCell<InlineYoutubeViewDelegate>
    @property (nonatomic, strong) InlineYoutubeView *youtubeView;
    @property (nonatomic, strong) UIImageView *thumbnailView;
    @property (nonatomic, strong) UIImageView *playIconView;
    @property (nonatomic, strong) UIActivityIndicatorView *loaderView;
    @property (nonatomic, strong) NSString *videoId;
    @property (nonatomic, assign) BOOL playInline;
    
    -(id)initWithFrame:(CGRect)frame andVideoId: (NSString *)videoId andShouldPlayInline: (BOOL) playInline;
    -(void) playButtonClicked;
@end
