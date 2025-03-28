/*
 * Trivial storage driver for example programs
 *
 * Copyright (C) 2019 Benjamin Berg <bberg@redhat.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#pragma once

#include <glib.h>
#include <libfprint/fprint.h>

int print_data_save (FpPrint *print,
                     FpFinger finger,
                     gboolean update_fingerprint);
FpPrint * print_data_load (FpDevice *dev,
                           FpFinger  finger);
GPtrArray * gallery_data_load (FpDevice *dev);
gboolean clear_saved_prints (FpDevice *dev,
                             GError  **error);
FpPrint * print_create_template (FpDevice      *dev,
                                 FpFinger       finger,
                                 const gboolean load_existing);
gboolean print_image_save (FpPrint    *print,
                           const char *path);
gboolean save_image_to_pgm (FpImage    *img,
                            const char *path);
