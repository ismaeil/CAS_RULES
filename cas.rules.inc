<?php

/**
 * @file
 * Tell Rules about the cas_login event.
 *
 * Tell Rules to add an event corresponding to a user authentification via
 * Cas module.
 */

/**
 * Implements hook_rules_event_info().
 */
function cas_rules_event_info() {
  $items = array(
    'authentification_via_cas' => array(
      'label' => t('User is authentificated via CAS module'),
      'group' => t('User'),
    ),
  );

  return $items;
}
