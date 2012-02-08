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
    'cas_login' => array(
      'label' => t('User is authentificated via CAS'),
      'group' => t('User'),
    ),
  );

  return $items;
}

/**
 * Implements hook_rules_condition_info().
 */
function cas_rules_condition_info() {
  $items = array(
    'user_is_cas' => array(
      'label' => t('User is CAS authentificated'),
      'parameter' => array(
        'account' => array('type' => 'user', 'label' => t('User')),
      ),
      'base' => 'rules_condition_user_is_cas',
      'group' => t('User'),
    ),
  );
  return $items;
}

/**
 * Condition: User is CAS.
 */
function rules_condition_user_is_cas() {
  return !empty($_SESSION['phpCAS']['user']);
}
