// Copyright (c) 2017 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#include <vector>

#include "atom/browser/native_browser_view.h"

#include "atom/browser/api/atom_api_web_contents.h"
#include "brightray/browser/inspectable_web_contents.h"

namespace atom {

NativeBrowserView::NativeBrowserView(
    brightray::InspectableWebContents* inspectable_web_contents)
    : inspectable_web_contents_(inspectable_web_contents) {}

NativeBrowserView::~NativeBrowserView() {}

brightray::InspectableWebContentsView*
NativeBrowserView::GetInspectableWebContentsView() {
  return inspectable_web_contents_->GetView();
}

}  // namespace atom
